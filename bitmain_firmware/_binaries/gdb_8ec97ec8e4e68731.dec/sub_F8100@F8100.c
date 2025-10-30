int *__fastcall sub_F8100(int *result, int *a2, int (__fastcall *a3)(int, int))
{
  int *v3; // r11
  int *v5; // r4
  int v7; // r10
  int v8; // r7
  int *v9; // r6
  int v10; // r7
  int *v11; // r8
  int v12; // t1
  char *v13; // [sp+4h] [bp-2Ch]

  if ( result != a2 && a2 != result + 1 )
  {
    v3 = result + 1;
    v5 = result;
    v7 = -4 - (_DWORD)result;
    v13 = (char *)(result + 2);
    do
    {
      while ( 1 )
      {
        v9 = v3 + 1;
        result = (int *)a3(*v3, *v5);
        if ( result )
          break;
        v10 = *v3;
        while ( 1 )
        {
          v11 = v3;
          v12 = *--v3;
          result = (int *)a3(v10, v12);
          if ( !result )
            break;
          v3[1] = *v3;
        }
        *v11 = v10;
        v3 = v9;
        if ( v9 == a2 )
          return result;
      }
      v8 = *v3;
      if ( v5 != v3 )
        result = (int *)memmove(v13 - 4, v5, (size_t)v9 + v7);
      *v5 = v8;
      ++v3;
    }
    while ( v9 != a2 );
  }
  return result;
}
