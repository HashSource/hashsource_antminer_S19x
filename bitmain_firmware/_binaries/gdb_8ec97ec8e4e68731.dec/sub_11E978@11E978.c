void sub_11E978()
{
  int *v0; // r4
  int v1; // r3
  int *v2; // r5

  v0 = (int *)dword_4872DC;
  if ( dword_4872DC )
  {
    do
    {
      v1 = *v0;
      if ( (*(_BYTE *)(*v0 + 10) & 1) != 0 )
      {
        if ( *(_DWORD *)(v1 + 16) )
        {
          sub_11E8E8(*v0);
          v1 = *v0;
        }
        *(_BYTE *)(v1 + 10) &= ~1u;
      }
      v2 = (int *)v0[2];
      free(v0);
      v0 = v2;
    }
    while ( v2 );
  }
  dword_4872E0 = 0;
  dword_4872DC = 0;
}
