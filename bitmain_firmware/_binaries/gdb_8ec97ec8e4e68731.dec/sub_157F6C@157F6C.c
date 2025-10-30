int *__fastcall sub_157F6C(int a1, int a2)
{
  int *v2; // r4
  int **v3; // r5
  int v6; // r3
  int (__fastcall *v7)(int *, int); // r3
  int *v8; // t1

  v2 = &dword_35C954;
  v3 = &off_3A7718;
  do
  {
    v6 = v2[7];
    if ( v6 )
    {
      if ( *v2 != a2 )
      {
        v7 = *(int (__fastcall **)(int *, int))(v6 + 36);
        if ( v7 )
        {
          if ( v7(v2, a1) )
            break;
        }
      }
    }
    v8 = *v3++;
    v2 = v8;
  }
  while ( v8 );
  return v2;
}
