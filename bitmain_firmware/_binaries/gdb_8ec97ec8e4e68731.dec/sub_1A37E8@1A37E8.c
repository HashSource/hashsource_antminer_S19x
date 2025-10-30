_DWORD *__fastcall sub_1A37E8(int *a1, int a2, char *a3)
{
  int *v4; // r0
  int v5; // r5
  int *v7; // r6
  int v8; // r4
  _DWORD *result; // r0
  int v10; // r2
  char *v11; // r5
  char *v12; // r9
  int v13; // r3

  v4 = (int *)a1[4];
  v5 = a2;
  v7 = a1 + 4;
  if ( v4 )
  {
    v8 = v4[3];
    if ( a2 > v8 )
    {
      while ( 1 )
      {
        v7 = v4 + 5;
        v4 = (int *)v4[5];
        if ( !v4 )
          break;
        v8 = v4[3];
        if ( v8 >= a2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( a2 == v8 )
      {
        v11 = (char *)sub_1A37A0(v4);
        v12 = (char *)sub_1A37A0(a1);
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "both `%s' and `%s' allegedly #included at %s:%d", a3, v11, v12, v8);
        if ( v12 )
          free(v12);
        if ( v11 )
          free(v11);
        v13 = *v7;
        if ( *v7 )
        {
          v5 = v8;
          if ( *(_DWORD *)(v13 + 12) == v8 )
          {
            do
            {
              v7 = (int *)(v13 + 20);
              v13 = *(_DWORD *)(v13 + 20);
              ++v5;
            }
            while ( v13 && *(_DWORD *)(v13 + 12) == v5 );
          }
        }
        else
        {
          v5 = v8;
        }
      }
    }
  }
  result = sub_1A3298((int *)*a1, a3);
  result[2] = a1;
  v10 = *v7;
  result[3] = v5;
  result[5] = v10;
  *v7 = (int)result;
  return result;
}
