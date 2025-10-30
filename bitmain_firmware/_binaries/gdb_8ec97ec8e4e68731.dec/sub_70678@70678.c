char __fastcall sub_70678(char result, int a2)
{
  int v2; // r3
  unsigned int v3; // r7
  int v4; // r6
  _DWORD *v5; // lr
  int v6; // r6
  unsigned int v7; // r3
  unsigned int v8; // r5
  int v9; // r4
  _BYTE *v10; // r2
  bool v11; // cf
  _BYTE *v12; // r3
  _BYTE *v13; // r4
  _BYTE *v14; // r8
  char v15; // lr
  unsigned int v16; // r5
  int v17; // r3

  v2 = dword_47494C;
  v3 = dword_4748F0;
  v4 = dword_474948;
  *(_BYTE *)dword_4748F0 = byte_474944;
  v5 = *(_DWORD **)(v4 + 4 * v2);
  v6 = v4 + 4 * v2;
  v7 = v5[1];
  v8 = v7 + 2;
  if ( v7 + 2 > v3 )
  {
    v9 = v5[3];
    v10 = (_BYTE *)(v7 + dword_474950 + 2);
    v11 = v7 >= (unsigned int)v10;
    v12 = (_BYTE *)(v7 + v9 + 2);
    if ( !v11 )
    {
      v13 = v10 - 1;
      v14 = v12 - 1;
      do
      {
        v15 = *v13;
        v10 = v13;
        v12 = v14;
        --v13;
        *v14-- = v15;
        v5 = *(_DWORD **)v6;
        v16 = *(_DWORD *)(*(_DWORD *)v6 + 4);
      }
      while ( v16 < (unsigned int)v10 );
      v9 = v5[3];
      v8 = v16 + 2;
    }
    v17 = v12 - v10;
    dword_474950 = v9;
    v3 += v17;
    a2 += v17;
    v5[4] = v9;
    if ( v3 < v8 )
      sub_70650("flex scanner push-back overflow");
  }
  *(_BYTE *)(v3 - 1) = result;
  dword_4748EC = a2;
  byte_474944 = *(_BYTE *)(v3 - 1);
  dword_4748F0 = v3 - 1;
  return result;
}
