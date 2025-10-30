_DWORD *__fastcall sub_26DD30(_DWORD *a1, const void *a2, int a3)
{
  int v4; // r6
  _DWORD *v5; // r7
  int v6; // r5
  _DWORD *v7; // r4

  v4 = a3;
  v5 = (_DWORD *)sub_176ED4(a1, (int)a2, a3);
  v6 = sub_171258(v5);
  if ( a2 )
    v7 = sub_26DCD8(v5, a2);
  else
    v7 = sub_26BB08(v5);
  if ( sub_1710BC(0, v6) && *sub_1710BC(0, v6) == 1 )
    v4 = sub_1710BC(0, v6)[2];
  v7[2] = v4;
  *v7 = 1;
  return v7;
}
