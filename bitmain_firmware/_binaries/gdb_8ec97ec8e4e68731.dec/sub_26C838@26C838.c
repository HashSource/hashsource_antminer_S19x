_BYTE *__fastcall sub_26C838(int a1)
{
  int v1; // r1
  int v2; // r1
  _DWORD *v3; // r2
  signed int v4; // r3

  v1 = a1;
  if ( a1 <= 0 )
  {
    if ( dword_48AA04 + a1 <= 0 )
    {
      if ( a1 )
        sub_946E0("History does not go back to $$%d.", -a1);
      sub_946E0("The history is empty.");
    }
    v1 = dword_48AA04 + a1;
  }
  if ( dword_48AA04 < v1 )
    sub_946E0("History has not yet reached $%d.", v1);
  v2 = v1 - 1;
  v3 = (_DWORD *)dword_48AA08;
  v4 = v2 / -60 + (dword_48AA04 - 1) / 0x3Cu;
  if ( v4 > 0 )
  {
    do
    {
      --v4;
      v3 = (_DWORD *)*v3;
    }
    while ( v4 );
  }
  return sub_26C4E0((int *)v3[v2 % 0x3Cu + 1]);
}
