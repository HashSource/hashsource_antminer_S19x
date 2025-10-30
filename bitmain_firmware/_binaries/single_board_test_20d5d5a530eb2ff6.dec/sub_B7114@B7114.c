int __fastcall sub_B7114(int a1, _DWORD *a2)
{
  int v2; // r4
  int v4; // r5

  v2 = a1;
  v4 = a1;
  do
  {
    if ( !sub_B6708(v2, 8) )
      break;
    v4 = v2;
    v2 = *(_DWORD *)(v2 + 40);
  }
  while ( v2 );
  if ( a2 )
    *a2 = *(_DWORD *)(v4 + 28);
  return v4;
}
