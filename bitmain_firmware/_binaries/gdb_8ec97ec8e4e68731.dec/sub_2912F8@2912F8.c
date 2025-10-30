void __fastcall sub_2912F8(int a1)
{
  int v1; // r1
  void *v3; // r0

  v1 = dword_48AAF0;
  if ( a1 >= dword_48AAF0 )
  {
    v3 = (void *)dword_48AAD4;
    do
    {
      dword_48AAF0 = v1 + 256;
      v3 = sub_93050(v3, v1 + 256);
      v1 = dword_48AAF0;
      dword_48AAD4 = (int)v3;
    }
    while ( dword_48AAF0 <= a1 );
  }
  sub_27F3E4();
}
