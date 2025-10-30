int sub_479CC()
{
  int *v1; // r12
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r12
  _DWORD v7[513]; // [sp+0h] [bp-804h] BYREF

  switch ( dword_534B54 )
  {
    case 540:
      return 1;
    case 565:
      sub_24B20(540);
      sub_478A8();
      dword_534B54 = 540;
      if ( (unsigned int)dword_B308C > 3 )
      {
        v1 = (int *)&unk_99A7C;
        goto LABEL_11;
      }
      break;
    case 590:
      sub_24B20(565);
      sub_478A8();
      dword_534B54 = 565;
      if ( (unsigned int)dword_B308C > 3 )
      {
        v1 = (int *)&unk_99A68;
LABEL_11:
        v2 = *v1;
        v3 = v1[1];
        v4 = v1[2];
        v5 = v1[3];
        v6 = v1[4];
        v7[0] = v2;
        v7[1] = v3;
        v7[2] = v4;
        v7[3] = v5;
        v7[4] = v6;
        sub_3B6AC(3, (const char *)v7, 0, v5);
        return 0;
      }
      break;
  }
  return 0;
}
