private ["_array","_unit"];
_array = _this select 0;
_unit = [];
{_unit = _unit + [typeof _x];} foreach _array;
copyToClipboard format["%1",_unit];
hint "Classes copied!";
