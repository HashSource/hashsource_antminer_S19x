void sub_33428()
{
  int v0; // r5
  char *v1; // r2
  char *v2; // r4
  int v3; // r4

  v0 = 0;
  v1 = (char *)dword_1AEA68;
  do
  {
    v2 = (char *)&unk_EDF22 + v0++;
    v3 = 4 * (_DWORD)v2;
    if ( *(_DWORD *)&v1[v3 + 4] )
    {
      free(*(void **)&v1[v3 + 4]);
      v1 = (char *)dword_1AEA68;
      *(_DWORD *)(dword_1AEA68 + v3 + 4) = 0;
    }
  }
  while ( v0 != 78 );
  free(v1);
  dword_1AEA68 = 0;
}
