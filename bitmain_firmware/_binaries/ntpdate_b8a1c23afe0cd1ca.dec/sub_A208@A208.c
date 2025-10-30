int __fastcall sub_A208(_BYTE *a1, int a2, unsigned __int8 *a3, int a4)
{
  _BYTE *v4; // r4
  unsigned int v6; // r6
  int result; // r0
  int v8; // r3
  unsigned __int8 *v9; // r5
  size_t v10; // r0
  _BYTE *v11; // r3
  size_t v12; // r2
  void *v13; // r0
  char v14[256]; // [sp+4h] [bp+0h] BYREF

  v4 = a1;
  v6 = (unsigned int)&a1[a2 - 1];
LABEL_2:
  result = *a3;
  if ( *a3 )
  {
    while ( v6 > (unsigned int)v4 )
    {
      if ( result == 37 )
      {
        v8 = a3[1];
        v9 = a3 + 2;
        if ( v8 == 109 )
        {
          sub_A130(a4, v14, 0x100u);
          v10 = strlen(v14);
          v11 = &v4[v10];
          if ( (unsigned int)&v4[v10] < v6 )
          {
            v12 = v10;
            v13 = v4;
            v4 = v11;
            memcpy(v13, v14, v12);
          }
          a3 = v9;
        }
        else
        {
          *v4 = 37;
          if ( !v8 )
          {
            ++v4;
            break;
          }
          v4[1] = v8;
          a3 += 2;
          v4 += 2;
        }
        goto LABEL_2;
      }
      ++a3;
      *v4 = result;
      result = *a3;
      ++v4;
      if ( !*a3 )
        break;
    }
  }
  *v4 = 0;
  return result;
}
