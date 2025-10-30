int sub_6AC5C()
{
  char v2[2048]; // [sp+14h] [bp-810h] BYREF
  _DWORD v3[2]; // [sp+814h] [bp-10h] BYREF
  int v4; // [sp+81Ch] [bp-8h] BYREF

  v4 = -1;
  if ( dword_530F14 )
  {
    if ( !dword_531B20 )
    {
      dword_531B1C = (int)sub_5840C(437284, 0, 0);
      pthread_mutex_init(&stru_531B04, 0);
    }
    v4 = ++dword_531B20;
    v3[0] = 0;
    v3[1] = 0;
    sub_5848C((_DWORD *)dword_531B1C, (int)&v4, 4, (int)v3, 8);
    return v4;
  }
  else
  {
    strcpy(v2, "please init platform first!!\n");
    sub_3AF5C(0, v2, 0, (int)v2);
    return -2;
  }
}
