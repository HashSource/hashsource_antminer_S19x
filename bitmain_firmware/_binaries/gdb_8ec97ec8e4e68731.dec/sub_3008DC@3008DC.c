int __fastcall sub_3008DC(int a1, char a2, char a3, char a4, int a5)
{
  unsigned int v5; // r1
  int v6; // lr
  unsigned int v7; // r3
  unsigned int v8; // r12
  int v9; // r12
  int result; // r0

  v5 = (2 * ((1 << (a2 - 1)) - 1)) | 1;
  v6 = ~v5;
  v7 = (2 * ((1 << (a4 - 1)) - 1)) | 1 | (v5 << a3);
  v8 = (a5 & v7) >> a3;
  switch ( a1 )
  {
    case 0:
      goto LABEL_7;
    case 1:
      goto LABEL_3;
    case 2:
      v6 = ~(v5 >> 1);
LABEL_3:
      v9 = v6 & v8;
      if ( v9 )
      {
        if ( (v6 & (v7 >> a3)) == v9 )
          result = 2;
        else
          result = 3;
      }
      else
      {
LABEL_7:
        result = 2;
      }
      break;
    case 3:
      if ( (v6 & v8) != 0 )
        result = 3;
      else
        result = 2;
      break;
    default:
      sub_2A6BF0((int)"reloc.c", 537, (int)"bfd_check_overflow");
  }
  return result;
}
