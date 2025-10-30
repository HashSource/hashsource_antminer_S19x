int __fastcall sub_1F63C0(int a1)
{
  int v2; // [sp+4h] [bp-4h]

  if ( !dword_48934C )
  {
    v2 = a1;
    sub_1F6370();
    a1 = v2;
  }
  if ( a1 < 0 || dword_489350 <= a1 )
    return -1;
  else
    return *(_DWORD *)(dword_48934C + 4 * a1);
}
