_DWORD *__fastcall sub_CCB74(_DWORD *a1, int a2)
{
  bool v3; // zf
  int v4; // r5
  _DWORD *v5; // r4
  _DWORD *v7; // lr
  int (**v8)(); // r12

  if ( (unsigned int)(a2 - 27) <= 2 )
  {
    v5 = sub_9836C(0xA8u);
    memset(v5, 0, 0xA8u);
    v5[4] = 1;
    v7 = v5 + 13;
    *((_BYTE *)v5 + 32) = 0;
    v8 = off_37D908;
    goto LABEL_11;
  }
  v3 = a2 == 13;
  if ( a2 != 13 )
    v3 = a2 == 10;
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_9836C(0x88u);
    memset(v5, 0, 0x88u);
    v5[4] = 1;
    v7 = v5 + 13;
    *((_BYTE *)v5 + 32) = 0;
    v8 = off_37E22C;
LABEL_11:
    *((_BYTE *)v5 + 33) = 0;
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v5[28] = -1;
    *v5 = v8;
    goto LABEL_9;
  }
  v5 = sub_9836C(0x88u);
  memset(v5, v4, 0x88u);
  v5[11] = v4;
  v5[12] = v4;
  *v5 = off_37E1FC;
  v5[4] = 1;
  v5[13] = 0;
  v5[14] = 0;
  v5[15] = 0;
  v5[16] = 0;
  v5[17] = 0;
  v5[19] = v4;
  v5[21] = v4;
  v5[28] = -1;
LABEL_9:
  *a1 = v5;
  return a1;
}
