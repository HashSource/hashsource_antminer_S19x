int __fastcall sub_2ABC24(int a1, char *a2, int *a3, int a4, unsigned int a5)
{
  char *v5; // r5
  char v6; // r12
  int result; // r0
  unsigned int v8; // r1
  unsigned int v9; // r4
  int v10; // lr
  char v11; // t1
  _BOOL4 v12; // r1

  if ( (unsigned int)a2 >= a5 )
  {
    v6 = 0;
    v12 = 1;
    LOBYTE(v9) = 0;
    v10 = 0;
    result = 0;
  }
  else
  {
    v5 = a2 + 1;
    v6 = *a2;
    result = *a2 & 0x7F;
    if ( *a2 < 0 )
    {
      v8 = a5 - (_DWORD)a2;
      v9 = 7;
      v10 = 1;
      do
      {
        if ( v8 == v10 )
          break;
        v11 = *v5++;
        v6 = v11;
        ++v10;
        result |= (v11 & 0x7F) << v9;
        v9 += 7;
      }
      while ( v11 < 0 );
      v12 = v9 <= 0x1F;
    }
    else
    {
      v12 = 1;
      LOBYTE(v9) = 7;
      v10 = 1;
    }
  }
  if ( a3 )
    *a3 = v10;
  if ( !a4 )
    v12 = 0;
  if ( v12 && (v6 & 0x40) != 0 )
    return result | (-1 << v9);
  return result;
}
