int __fastcall sub_12BCA4(const char *a1, char *a2, signed int *a3, _DWORD *a4)
{
  signed int v8; // r0
  char *v9; // r1
  char *v10; // r7
  int result; // r0
  _BYTE v12[4]; // [sp+8h] [bp-20h] BYREF
  char *endptr; // [sp+Ch] [bp-1Ch] BYREF

  if ( !a1 )
    return 0;
  v8 = strtoul(a1, &endptr, 10);
  v9 = endptr;
  if ( !endptr )
  {
    if ( v8 >= 0 )
    {
      *a3 = v8;
      goto LABEL_12;
    }
LABEL_19:
    sub_D0048(13, 182, 187, (int)"crypto/asn1/asn1_gen.c", 360);
    return 0;
  }
  if ( *endptr && endptr > &a2[(int)a1] )
    return 0;
  if ( v8 < 0 )
    goto LABEL_19;
  v10 = (char *)(endptr - a1);
  *a3 = v8;
  if ( a2 == v10 )
  {
LABEL_12:
    result = 1;
    *a4 = 128;
    return result;
  }
  switch ( *v9 )
  {
    case 'A':
      result = 1;
      *a4 = 64;
      break;
    case 'C':
      goto LABEL_12;
    case 'P':
      result = 1;
      *a4 = 192;
      break;
    case 'U':
      result = 1;
      *a4 = 0;
      break;
    default:
      v12[0] = *v9;
      v12[1] = 0;
      sub_D0048(13, 182, 186, (int)"crypto/asn1/asn1_gen.c", 391);
      sub_D1240(2, "Char=", v12);
      result = 0;
      break;
  }
  return result;
}
