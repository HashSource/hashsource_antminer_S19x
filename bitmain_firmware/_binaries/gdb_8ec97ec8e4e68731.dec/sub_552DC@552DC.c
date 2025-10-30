int __fastcall sub_552DC(char *a1, int a2, int a3)
{
  int v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r0
  int result; // r0
  _BYTE *v11; // r1

  v6 = sub_5325C(a1, -1, a3, (int **)&dword_4747D0);
  *(_DWORD *)(v6 + 64) = &loc_F6D00;
  v7 = (_DWORD *)sub_93028(8);
  v7[1] = "wb";
  *v7 = a2;
  sub_53230(v6, (int)v7);
  *(_DWORD *)(v6 + 16) = sub_552B8;
  v8 = (_DWORD *)sub_5325C(a1, -1, a3, &dword_4747D4);
  v8[16] = &loc_F6D00;
  v9 = (_DWORD *)sub_93028(8);
  *v9 = a2;
  v9[1] = &byte_38A628;
  result = sub_53230((int)v8, (int)v9);
  v11 = (_BYTE *)v8[7];
  v8[4] = sub_552B8;
  if ( *v11 == 87 && v11[1] == 114 && v11[2] == 105 && v11[3] == 116 && v11[4] == 101 && v11[5] == 32 )
  {
    result = sub_31E27C("Append ", v11 + 6, 0);
    v8[7] = result;
  }
  return result;
}
