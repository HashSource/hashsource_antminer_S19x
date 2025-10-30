int __fastcall sub_25DC1C(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  int v3; // r5
  bool v4; // zf
  int v5; // r0
  unsigned int v6; // r4
  unsigned __int8 *v7; // r0
  int v9; // r0

  v1 = sub_26EAAC(a1);
  v2 = (_DWORD *)sub_26BC70(v1);
  v3 = sub_171258(v2);
  v4 = sub_26E9E0(v1) == 0;
  v5 = v1;
  if ( v4 )
  {
    v6 = *(_DWORD *)(v3 + 20);
    v7 = (unsigned __int8 *)sub_26E978(v5);
    do
    {
      if ( (--v6 & 0x80000000) != 0 )
        break;
    }
    while ( !*v7++ );
    return v6 >> 31;
  }
  else
  {
    v9 = sub_26E978(v1);
    return ((int (__fastcall *)(int, int))loc_252478)(v9, v3);
  }
}
