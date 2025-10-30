int __fastcall sub_1BC080(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r7
  _DWORD *v6; // r0
  int v7; // r3
  bool v8; // zf
  int v9; // r3
  int v10; // r0
  bool v11; // zf
  bool v12; // zf
  bool v13; // zf
  int v15; // r0
  _DWORD *v16; // r0
  bool v17; // zf

  if ( a1 != (_DWORD *)sub_26BC70(a2) )
  {
    v4 = sub_171258(a1);
    v5 = **(char **)(v4 + 24);
    v6 = (_DWORD *)sub_26BC70(a2);
    v7 = **(char **)(sub_171258(v6) + 24);
    if ( v7 == 18 )
    {
      v15 = sub_26EA24(a2);
      v16 = (_DWORD *)sub_26BC70(v15);
      v7 = **(char **)(sub_171258(v16) + 24);
      v17 = v7 == 21;
      if ( v7 != 21 )
        v17 = v7 == 8;
      if ( v17 )
        goto LABEL_7;
    }
    else
    {
      v8 = v7 == 21;
      if ( v7 != 21 )
        v8 = v7 == 8;
      if ( v8 )
        goto LABEL_7;
    }
    v11 = v7 == 9;
    if ( v7 != 9 )
      v11 = v7 == 20;
    if ( !v11 )
    {
      v12 = v7 == 5;
      if ( v7 != 5 )
        v12 = v7 == 25;
      if ( !v12 )
      {
        v13 = v5 == 2;
        if ( v5 == 2 )
          v13 = v7 == 12;
        if ( !v13 )
          return sub_2647C8(a1, a2);
        goto LABEL_8;
      }
    }
LABEL_7:
    if ( v5 != 2 )
      return sub_2647C8(a1, a2);
LABEL_8:
    v9 = *(_DWORD *)(v4 + 24);
    if ( (*(_BYTE *)(v9 + 2) & 1) != 0 )
    {
      v10 = sub_171258(*(_DWORD **)(v9 + 20));
      sub_2647C8(v10, a2);
      JUMPOUT(0x25E368);
    }
    return sub_2647C8(a1, a2);
  }
  return a2;
}
