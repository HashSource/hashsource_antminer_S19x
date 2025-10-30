void sub_6318C()
{
  double v0; // d0
  int i; // [sp+3Ch] [bp-8h]

  sub_630A0();
  sub_63118();
  if ( v0 >= 0.0 && dword_53155C > 1 )
  {
    for ( i = 0;
          i < dword_53155C - 1
       && (v0 <= *((double *)&unk_531548 + i + 23) - 0.001 || v0 >= *((double *)&unk_531548 + i + 24) + 0.001)
       && (v0 >= *((double *)&unk_531548 + i + 23) + 0.001 || v0 <= *((double *)&unk_531548 + i + 24) - 0.001);
          ++i )
    {
      ;
    }
  }
}
