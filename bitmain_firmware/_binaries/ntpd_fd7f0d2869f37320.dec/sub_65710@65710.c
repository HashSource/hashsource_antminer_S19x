size_t __fastcall sub_65710(size_t result, int a2, unsigned __int8 *a3, int a4)
{
  _BYTE *v5; // r4
  unsigned int v6; // r5
  int v7; // r1
  unsigned __int8 *v8; // r9
  _BYTE *v9; // r3
  size_t v10; // r2
  void *v11; // r0
  char v12[256]; // [sp+4h] [bp-108h] BYREF

  v5 = (_BYTE *)result;
  v6 = result + a2 - 1;
LABEL_2:
  v7 = *a3;
  if ( *a3 )
  {
    while ( (unsigned int)v5 < v6 )
    {
      if ( v7 == 37 )
      {
        result = a3[1];
        v8 = a3 + 2;
        if ( result == 109 )
        {
          sub_6563C(a4, v12, 0x100u);
          result = strlen(v12);
          v9 = &v5[result];
          if ( v6 > (unsigned int)&v5[result] )
          {
            v10 = result;
            v11 = v5;
            v5 = v9;
            result = (size_t)memcpy(v11, v12, v10);
          }
          a3 = v8;
          goto LABEL_2;
        }
        *v5 = 37;
        if ( result )
        {
          v5[1] = result;
          a3 += 2;
          v5 += 2;
          goto LABEL_2;
        }
        ++v5;
        break;
      }
      ++a3;
      *v5++ = v7;
      v7 = *a3;
      if ( !*a3 )
        break;
    }
  }
  *v5 = 0;
  return result;
}
