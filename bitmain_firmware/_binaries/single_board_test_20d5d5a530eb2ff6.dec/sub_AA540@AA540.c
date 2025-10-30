int __fastcall sub_AA540(int a1, const char *a2)
{
  int **v2; // r3
  int v5; // r6
  int v6; // r0
  int v8; // r1
  int v9; // r3

  v2 = *(int ***)(a1 + 12);
  if ( !v2 )
  {
    v9 = *(_DWORD *)(a1 + 16);
    if ( !v9 )
      return 0;
    v2 = *(int ***)(v9 + 1232);
  }
  v5 = **v2;
  v6 = strcmp("None", a2);
  if ( v6 )
  {
    if ( !strcmp("SSLv3", a2) )
    {
      v6 = 1;
    }
    else if ( !strcmp("TLSv1", a2) )
    {
      v6 = 2;
    }
    else if ( !strcmp("TLSv1.1", a2) )
    {
      v6 = 3;
    }
    else if ( !strcmp("TLSv1.2", a2) )
    {
      v6 = 4;
    }
    else if ( !strcmp("TLSv1.3", a2) )
    {
      v6 = 5;
    }
    else if ( !strcmp("DTLSv1", a2) )
    {
      v6 = 6;
    }
    else
    {
      if ( strcmp("DTLSv1.2", a2) )
        return 0;
      v6 = 7;
    }
  }
  v8 = *((_DWORD *)&unk_202E1C + 2 * v6 + 313);
  if ( v8 < 0 )
    return 0;
  return sub_9CB40(v5, v8, *(int **)(a1 + 68));
}
