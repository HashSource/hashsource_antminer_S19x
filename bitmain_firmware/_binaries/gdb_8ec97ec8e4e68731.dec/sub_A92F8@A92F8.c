int __fastcall sub_A92F8(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r3
  unsigned int v9; // r4
  int v11; // r8
  int v12; // r6
  __int64 v13; // r0

  v5 = sub_A8AAC(a1);
  v6 = sub_26BC70(v5);
  v7 = sub_A0870(v6);
  v8 = *(_DWORD *)(v7 + 24);
  if ( *(_BYTE *)v8 != 2 )
  {
    if ( a2 > 0 )
    {
      v9 = 0;
LABEL_11:
      sub_946E0("too many subscripts (%d expected)", v9);
    }
    return v5;
  }
  v9 = *(_DWORD *)(*(_DWORD *)(v8 + 24) + 8) & 0xFFFFFFF0;
  if ( !v9 )
  {
    if ( a2 > 0 )
    {
      v11 = v7;
      v12 = a3 - 4;
      while ( 1 )
      {
        v12 += 4;
        ++v9;
        v13 = sub_9B510();
        v5 = sub_25CE0C(v5, HIDWORD(v13), v13, HIDWORD(v13));
        if ( a2 == v9 )
          break;
        if ( **(_BYTE **)(v11 + 24) != 2 )
          goto LABEL_11;
      }
    }
    return v5;
  }
  return sub_A916C(v5, a2, a3);
}
