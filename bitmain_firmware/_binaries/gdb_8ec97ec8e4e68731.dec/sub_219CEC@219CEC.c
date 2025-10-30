void sub_219CEC()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r5
  int v2; // r0
  const char *v3; // r2
  int v4; // r5
  _DWORD *v5; // r10
  int v6; // r0
  _DWORD *v7; // r5

  v0 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      v2 = v0[8];
      v3 = "(no object file)";
      v4 = v0[1];
      if ( v2 )
        v3 = (const char *)sub_1B87A8(v2);
      sub_259F10("Symbol cache statistics for pspace %d\n%s:\n", v4, v3);
      v5 = (_DWORD *)sub_1CD14C((int)v0, (_DWORD *)dword_489700);
      if ( v5 )
      {
        v1 = (_DWORD *)*v5;
        if ( *v5 )
        {
          sub_258BD4("  <disabled>\n");
          sub_259F10("Global block cache stats:\n");
          sub_259F10("  size:       %u\n", v1[3]);
          sub_259F10("  hits:       %u\n", *v1);
          sub_259F10("  misses:     %u\n", v1[1]);
          v6 = sub_259F10("  collisions: %u\n", v1[2]);
          v7 = (_DWORD *)v5[1];
          sub_258BD4(v6);
          sub_259F10("Static block cache stats:\n");
          sub_259F10("  size:       %u\n", v7[3]);
          sub_259F10("  hits:       %u\n", *v7);
          sub_259F10("  misses:     %u\n", v7[1]);
          sub_259F10("  collisions: %u\n", v7[2]);
        }
        else
        {
          sub_259F10("  <disabled>\n");
        }
      }
      else
      {
        sub_259F10("  empty, no stats available\n");
      }
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
}
