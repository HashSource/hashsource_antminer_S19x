int sub_4FD4C()
{
  char v1[2048]; // [sp+4h] [bp-810h] BYREF
  int v2; // [sp+804h] [bp-10h]
  int v3; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  v3 = 0;
  v2 = 0;
  for ( i = 0; i < dword_90E90; ++i )
  {
    if ( **(_BYTE **)(*(_DWORD *)(dword_90F34 + 4 * i) + 164) )
    {
      if ( **(_BYTE **)(*(_DWORD *)(dword_90F34 + 4 * i) + 172) )
      {
        ++v3;
      }
      else if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        strcpy(v1, "Blank worker exists.\n");
        sub_1DB6C(7, v1, 0);
      }
    }
  }
  if ( !v3 )
  {
    if ( !dword_88804 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        strcpy(v1, "No valid pools, please configure them first!\n");
        sub_1DB6C(5, v1, 0);
      }
      dword_88804 = 1;
    }
    return -1;
  }
  return v2;
}
