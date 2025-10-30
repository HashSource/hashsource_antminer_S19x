int __fastcall sub_28D0EC(int c)
{
  signed int v1; // r4
  _IO_FILE *v2; // r1
  int v3; // r5
  const unsigned __int16 **v5; // r0
  const __int32_t **v6; // r0
  int v7; // [sp+4h] [bp-8h]

  v1 = c;
  v2 = (_IO_FILE *)dword_48AAB0;
  if ( (unsigned int)(c - 128) > 0x7F )
  {
    if ( c <= 31 )
    {
      if ( (c & 0x80) != 0 || c == 9 )
        goto LABEL_3;
      v3 = 3;
      fwrite("C-", 1u, 2u, (FILE *)dword_48AAB0);
      goto LABEL_13;
    }
    v3 = 1;
  }
  else
  {
    if ( dword_48AB04 )
    {
LABEL_3:
      v3 = 1;
      goto LABEL_4;
    }
    v1 = c & 0xFFFFFF7F;
    fwrite("M-", 1u, 2u, (FILE *)dword_48AAB0);
    if ( v1 <= 31 )
    {
      v2 = (_IO_FILE *)dword_48AAB0;
      if ( v1 == 9 )
      {
        v3 = 3;
        goto LABEL_4;
      }
      v3 = 5;
      fwrite("C-", 1u, 2u, (FILE *)dword_48AAB0);
LABEL_13:
      v1 |= 0x40u;
      v2 = (_IO_FILE *)dword_48AAB0;
      if ( (v1 & 0xFFFFFF00) == 0 )
      {
        v7 = dword_48AAB0;
        v5 = _ctype_b_loc();
        v2 = (_IO_FILE *)v7;
        if ( ((*v5)[(__int16)v1] & 0x200) != 0 )
        {
          v6 = _ctype_toupper_loc();
          v2 = (_IO_FILE *)v7;
          v1 = (*v6)[(__int16)v1];
        }
      }
      goto LABEL_4;
    }
    v2 = (_IO_FILE *)dword_48AAB0;
    v3 = 3;
  }
  if ( v1 == 127 )
  {
    v3 += 2;
    v1 = 63;
    fwrite("C-", 1u, 2u, v2);
    v2 = (_IO_FILE *)dword_48AAB0;
  }
LABEL_4:
  IO_putc(v1, v2);
  fflush((FILE *)dword_48AAB0);
  return v3;
}
