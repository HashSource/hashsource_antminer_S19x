int __fastcall sub_3A298(const char *a1, speed_t a2, __int16 a3)
{
  int v6; // r4
  int *v7; // r6
  int *v9; // r9
  int v10; // r10
  int *v11; // r5
  int v12; // r6
  int v13; // r0
  _BYTE buf[128]; // [sp+4h] [bp-84h] BYREF

  v6 = open64(a1, 2306);
  if ( !v6 )
  {
    v6 = dup(0);
    v9 = _errno_location();
    v10 = *v9;
    close(0);
    *v9 = v10;
  }
  if ( v6 < 0 )
  {
    v11 = _errno_location();
    v12 = *v11;
    v6 = -1;
    sub_64E00(3, "refclock_open %s: %m", a1);
    *v11 = v12;
  }
  else if ( sub_3A0AC(v6, a2, a3) )
  {
    v7 = _errno_location();
    do
    {
      while ( read(v6, buf, 0x80u) > 0 )
        ;
    }
    while ( *v7 == 4 );
  }
  else
  {
    v13 = v6;
    v6 = -1;
    close(v13);
  }
  return v6;
}
