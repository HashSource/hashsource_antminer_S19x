int sub_50A2C()
{
  char v1[2048]; // [sp+4h] [bp-810h] BYREF
  int v2; // [sp+804h] [bp-10h]
  int v3; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  v3 = 0;
  v2 = 0;
  for ( i = 0; i < dword_92028; ++i )
  {
    if ( **(_BYTE **)(*(_DWORD *)(dword_920CC + 4 * i) + 164) )
    {
      if ( **(_BYTE **)(*(_DWORD *)(dword_920CC + 4 * i) + 172) )
      {
        ++v3;
      }
      else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v1, "Blank worker exists.\n");
        sub_1E4EC(7, v1, 0);
      }
    }
  }
  if ( !v3 )
  {
    if ( !dword_8999C )
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        strcpy(v1, "No valid pools, please configure them first!\n");
        sub_1E4EC(5, v1, 0);
      }
      dword_8999C = 1;
    }
    return -1;
  }
  return v2;
}
