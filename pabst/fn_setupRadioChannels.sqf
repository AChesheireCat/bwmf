//START: TFR Auto Channel(PabstMirror) [2015/02/14]
#define SIDE_ARRAY          ["GrpNATO", "GrpCSAT", "GrpAAF", "GrpMSV"]
#define CHANNELS_ARRAYS	 [ \
    ["ASL","A1", "A2","A3"], \
    ["BSL","B1", "B2","B3"], \
    ["CSL","C1", "C2","C3"], \
    ["1PLT","MMG1","MMG2","MAT1","MAT2"], \
    ["COY","TH1", "TH2", "TH3", "TH4", "AH1"], \
    ["DSL","D1", "D2","D3"], \
    ["ESL","E1", "E2","E3"], \
    ["FSL","F1", "F2","F3"], \
    ["2PLT"] \
    ]

if (!hasInterface) exitWith {};

[] spawn {
    waitUntil {player == player};

    _groupFreqIndex = -1;//Figure out what channel the player's group uses
    {
        _theSide = _x;
        {
            _theGroupArrayIndex = _forEachIndex;
            {
                if ((group player) == (missionNameSpace getVariable [(format ["%1_%2", _theSide, _x]), grpNull])) then {
                    _groupFreqIndex = _theGroupArrayIndex;
                };
            } forEach _x;
        } forEach CHANNELS_ARRAYS;
        if (_groupFreqIndex != -1) exitWith {};
    } forEach SIDE_ARRAY;

    if (_groupFreqIndex == -1) then {
        systemChat format ["I have no idea what group you are in"];
        _groupFreqIndex = 0;
    };
    waitUntil {time > 1};

    waitUntil {
        sleep 1;
        _swRadioList = player call TFAR_fnc_radiosListSorted;
        (!isNil "_swRadioList") && {(count _swRadioList) > 0}
    };
    sleep 1;
    _swRadioList = player call TFAR_fnc_radiosListSorted;

    {
        [_x, _groupFreqIndex] call TFAR_fnc_setSwChannel;
        systemChat format ["SR Radio [%1] is set to [CH %2]", _x, (_groupFreqIndex + 1)];

    } forEach _swRadioList;

    _lrChannel = switch (_groupFreqIndex) do {
    case (0): {3}; //Alpha
    case (1): {3}; //Bravo
    case (2): {3}; // Charlie
    case (3): {4}; // 1PLT
    case (4): {4}; // COY
    case (5): {8}; // Delta
    case (6): {8}; // Echo
    case (7): {8}; // Foxtrot
    case (8): {4}; // 2PLT
        default {0};
    };
    _lrRadioArray = player call TFAR_fnc_backpackLR;
    if ((count _lrRadioArray) == 2) then {
        [(_lrRadioArray select 0), (_lrRadioArray select 1), _lrChannel] call TFAR_fnc_setLrChannel;
    };
    systemChat "-Radio Setup Complete-";
};
//END: TFR Settings (PabstMirror)
