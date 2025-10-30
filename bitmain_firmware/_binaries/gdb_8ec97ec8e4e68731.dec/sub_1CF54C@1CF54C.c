char *__fastcall sub_1CF54C(char *result, char *a2)
{
  char *v2; // r4
  char *v4; // r5
  int v5; // r8
  char *v6; // r9
  bool v7; // zf
  int v8; // r4
  int v9; // r11
  char *v10; // r6
  int v11; // r10
  int v12; // r0

  if ( result != a2 )
  {
    v2 = result + 4;
    if ( a2 != result + 4 )
    {
      v4 = result;
      v5 = -4 - (_DWORD)result;
      v6 = result + 8;
      do
      {
        v9 = *(_DWORD *)v4;
        v10 = v2 + 4;
        v11 = sub_21B7DC(*(_DWORD *)v2);
        v12 = sub_21B7DC(v9);
        if ( sub_25A8B8(v11, v12) < 0 )
        {
          v7 = v4 == v2;
          result = v6 - 4;
          v8 = *(_DWORD *)v2;
          if ( !v7 )
            result = (char *)memmove(result, v4, (size_t)&v10[v5]);
          *(_DWORD *)v4 = v8;
        }
        else
        {
          result = (char *)sub_1CF4FC(v2);
        }
        v2 = v10;
      }
      while ( a2 != v10 );
    }
  }
  return result;
}
