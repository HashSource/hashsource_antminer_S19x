void sub_63438()
{
  double v0; // d0
  int i; // [sp+3Ch] [bp-8h]

  sub_630A0();
  sub_63118();
  if ( v0 >= 0.0 && v0 <= v0 + 0.5 && v0 >= v0 - 0.5 )
  {
    for ( i = 0;
          i < dword_53155C - 1
       && (v0 <= *((double *)&unk_531548 + i + 3) - 0.001 || v0 >= *((double *)&unk_531548 + i + 4) + 0.001)
       && (v0 <= *((double *)&unk_531548 + i + 3) - 0.001 || v0 >= *((double *)&unk_531548 + i + 4) + 0.001);
          ++i )
    {
      ;
    }
  }
}
