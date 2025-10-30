int __fastcall sub_B36AC(_DWORD *a1, int *a2)
{
  int v3; // r4
  int v5; // r5
  int v6; // r4
  int v7; // r3
  int v8; // r1
  int v9; // r5
  int v10; // r4
  int v11; // r6
  int v12; // r1
  int v13; // r4
  int v14; // r1

  v3 = *(unsigned __int16 *)a2;
  switch ( v3 )
  {
    case 2:
      v5 = *a2;
      v6 = a2[1];
      v7 = a2[3];
      v8 = a2[2];
      *a1 = v5;
      a1[1] = v6;
      a1[2] = v8;
      a1[3] = v7;
      return 1;
    case 10:
      v9 = *a2;
      v10 = a2[1];
      v11 = a2[3];
      v12 = a2[2];
      *a1 = v9;
      a1[1] = v10;
      a1[2] = v12;
      a1[3] = v11;
      v13 = a2[5];
      v14 = a2[6];
      a1[4] = a2[4];
      a1[5] = v13;
      a1[6] = v14;
      return 1;
    case 1:
      memcpy(a1, a2, 0x6Eu);
      return 1;
    default:
      return 0;
  }
}
