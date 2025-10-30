int __fastcall sub_DE504(int a1, int a2, signed int n, void *src)
{
  signed int *v6; // r5
  int result; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  bool v13; // zf
  signed int v14; // r3

  v6 = *(signed int **)(a1 + 20);
  switch ( a2 )
  {
    case 4099:
      if ( !src )
        goto LABEL_23;
      v6[1] = (signed int)src;
      result = 1;
      break;
    case 4100:
      v8 = src == 0;
      if ( src )
        v8 = n == 0;
      if ( v8 )
        goto LABEL_24;
      if ( n < 0 )
        goto LABEL_23;
      v9 = v6[2];
      if ( v9 )
        sub_E0758(v9, v6[3], (size_t)"crypto/kdf/hkdf.c");
      v10 = sub_E9E68(src, n, "crypto/kdf/hkdf.c", 96);
      v6[2] = v10;
      if ( !v10 )
        goto LABEL_23;
      v6[3] = n;
      result = 1;
      break;
    case 4101:
      if ( n < 0 )
        goto LABEL_23;
      v11 = v6[4];
      if ( v11 )
        sub_E0758(v11, v6[5], (size_t)"crypto/kdf/hkdf.c");
      v12 = sub_E9E68(src, n, "crypto/kdf/hkdf.c", 110);
      v6[4] = v12;
      if ( !v12 )
        goto LABEL_23;
      v6[5] = n;
      result = 1;
      break;
    case 4102:
      v13 = src == 0;
      if ( src )
        v13 = n == 0;
      if ( v13 )
      {
LABEL_24:
        result = 1;
      }
      else if ( n >= 0 && (v14 = v6[262], n <= 1024 - v14) )
      {
        memcpy((char *)v6 + v14 + 24, src, n);
        v6[262] += n;
        result = 1;
      }
      else
      {
LABEL_23:
        result = 0;
      }
      break;
    case 4103:
      *v6 = n;
      result = 1;
      break;
    default:
      result = -2;
      break;
  }
  return result;
}
