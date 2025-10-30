void sub_61DC0()
{
  double v0; // d0
  int i; // [sp+3Ch] [bp-8h]

  sub_61A28();
  sub_61AA0();
  if ( v0 >= 0.0 && v0 + 0.5 >= v0 && v0 - 0.5 <= v0 )
  {
    for ( i = 0;
          dword_53636C - 1 > i
       && (*((double *)&unk_536358 + i + 3) - 0.001 >= v0 || *((double *)&unk_536358 + i + 4) + 0.001 <= v0)
       && (*((double *)&unk_536358 + i + 3) - 0.001 >= v0 || *((double *)&unk_536358 + i + 4) + 0.001 <= v0);
          ++i )
    {
      ;
    }
  }
}
