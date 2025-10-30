int sub_56230()
{
  void *v0; // r0
  int v1; // r0
  int v2; // r4
  int v3; // r4
  int v4; // r0
  int v5; // r4
  int v6; // r4
  int v7; // r4
  int v8; // r4
  int v9; // r4
  int result; // r0
  char v11[24]; // [sp+Ch] [bp-868h] BYREF
  _DWORD v12[6]; // [sp+80Ch] [bp-68h] BYREF
  char filename[67]; // [sp+824h] [bp-50h] BYREF
  unsigned __int8 i; // [sp+867h] [bp-Dh]

  *(_DWORD *)filename = 0;
  v0 = memset(&filename[4], 0, 0x3Cu);
  memset(v12, 0, sizeof(v12));
  for ( i = 0; ; ++i )
  {
    v3 = i;
    v4 = sub_5935C(v0);
    if ( v3 >= v4 )
      break;
    do
    {
      memset(filename, 0, 0x40u);
      v1 = sub_591D0(i);
      snprintf(filename, 0x40u, "/sys/class/pwm/pwmchip12/pwm%d/capture", v1);
      v2 = i;
      v0 = fopen(filename, "r");
      v12[v2] = v0;
      if ( !v12[i] )
      {
        snprintf(v11, 0x800u, "fail to open %s\n", filename);
        sub_3B6AC(0, v11, 0, (int)v11);
        v0 = (void *)usleep((__useconds_t)&unk_2DC6C0);
      }
    }
    while ( !v12[i] && dword_535F20 == 1 );
  }
  while ( dword_535F20 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = i;
      if ( v8 >= sub_5935C(v4) )
        break;
      fflush((FILE *)v12[i]);
      fseek((FILE *)v12[i], 0, 0);
      memset(filename, 0, 0x40u);
      fread(filename, 1u, 0x40u, (FILE *)v12[i]);
      v5 = i;
      dword_535F3C[v5] = sub_56114(i, filename);
      dword_B3814[i] = dword_535F3C[i];
      v6 = dword_B3814[i];
      v4 = sub_566F0(i);
      if ( v6 > v4 )
      {
        v7 = i;
        v4 = sub_566F0(i);
        dword_B3814[v7] = v4;
      }
    }
    v4 = usleep(0x64u);
  }
  for ( i = 0; ; ++i )
  {
    v9 = i;
    result = sub_5935C(v4);
    if ( v9 >= result )
      break;
    v4 = fclose((FILE *)v12[i]);
  }
  return result;
}
