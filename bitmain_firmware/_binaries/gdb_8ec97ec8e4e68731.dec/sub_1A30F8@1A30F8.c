void __fastcall sub_1A30F8(void *a1)
{
  int v2; // r0
  int v3; // r4
  _DWORD *v4; // r3

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 20);
      sub_1A30F8();
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(_DWORD **)a1;
  if ( !*(_DWORD *)(*(_DWORD *)a1 + 4) )
  {
    sub_1A2FEC(*((void **)a1 + 1));
    v4 = *(_DWORD **)a1;
  }
  if ( !*v4 )
    sub_1A2FEC(a1);
}
