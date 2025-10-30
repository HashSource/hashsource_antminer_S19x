void __fastcall sub_4D684(int a1)
{
  int *v1; // r2
  int *v2; // r3

  v1 = (int *)dword_47473C;
  if ( dword_47473C )
  {
    if ( a1 == *(_DWORD *)(dword_47473C + 4) )
    {
      v2 = (int *)dword_47473C;
      v1 = &dword_47473C;
LABEL_7:
      *v1 = *v2;
      free(v2);
    }
    else
    {
      while ( 1 )
      {
        v2 = (int *)*v1;
        if ( !*v1 )
          break;
        if ( v2[1] == a1 )
          goto LABEL_7;
        v1 = (int *)*v1;
      }
    }
  }
}
