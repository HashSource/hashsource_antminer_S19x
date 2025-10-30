int __fastcall sub_26EDE8(int a1, int a2, _DWORD *a3)
{
  int v6; // r5
  char *v7; // r1
  unsigned int v8; // r2
  bool v9; // cc
  int v11; // r0
  char v12[24]; // [sp+4h] [bp-50h] BYREF
  int v13; // [sp+1Ch] [bp-38h]

  sub_2665F0(v12);
  v6 = *(_DWORD *)(a1 + 64);
  if ( a3 )
    *a3 = 0;
  if ( v13 )
  {
    v7 = *(char **)(v6 + 24);
    v8 = *v7;
    v9 = v8 > 1;
    if ( v8 != 1 )
      v9 = (unsigned __int8)(v8 - 18) > 1u;
    if ( v9 || **(_BYTE **)(sub_171258(*((_DWORD **)v7 + 5)) + 24) != 3 || sub_26ED18(a1) )
    {
      if ( a2 )
      {
        v6 = *(_DWORD *)(a1 + 68);
        if ( a3 )
          *a3 = 1;
      }
    }
    else
    {
      v11 = sub_26338C(a1, 0, 0, 0);
      if ( v11 )
      {
        v6 = v11;
        if ( a3 )
          *a3 = 1;
      }
    }
  }
  return v6;
}
