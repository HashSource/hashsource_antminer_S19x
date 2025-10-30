__int64 __fastcall sub_665B0(int a1, _DWORD *a2, int a3)
{
  char *v4; // r4
  int v6; // r7
  __int64 result; // r0
  int v8; // r0

  if ( (unsigned int)(a3 - 1) > 1 )
    sub_946E0("Usage: -trace-define-variable VARIABLE [VALUE]");
  v4 = (char *)(*a2 + 1);
  if ( *(_BYTE *)*a2 != 36 )
    sub_946E0("Name of trace variable should start with '$'");
  sub_249934(*a2 + 1);
  v6 = sub_249854(v4);
  if ( !v6 )
    v6 = ((int (__fastcall *)(char *))loc_249750)(v4);
  if ( a3 == 2 )
  {
    v8 = sub_14CC6C(a2[1]);
    result = sub_26EB1C(v8);
  }
  else
  {
    result = 0;
  }
  *(_QWORD *)(v6 + 8) = result;
  return result;
}
