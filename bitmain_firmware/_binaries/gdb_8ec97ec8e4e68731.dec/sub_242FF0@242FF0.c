int __fastcall sub_242FF0(int a1, FILE *stream, __int64 a3)
{
  int v4; // lr
  int v5; // r0
  void *v6; // r6
  void *v7; // r5
  void *v8; // r5
  _DWORD *v9; // r2

  *(_QWORD *)(a1 + 52) = a3;
  v4 = dword_48A508;
  *(_DWORD *)(a1 + 44) = stream;
  *(_DWORD *)(a1 + 48) = stream;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = v4 + 1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  dword_48A508 = v4 + 1;
  *(_DWORD *)(a1 + 60) = fileno(stream);
  v5 = fileno(*(FILE **)(a1 + 48));
  *(_DWORD *)(a1 + 64) = isatty(v5);
  *(_DWORD *)(a1 + 68) = 1;
  v6 = sub_9836C(0x10u);
  sub_256868((int)v6, *(FILE **)(a1 + 52));
  *(_DWORD *)(a1 + 72) = v6;
  v7 = sub_9836C(0x10u);
  sub_256868((int)v7, *(FILE **)(a1 + 48));
  *(_DWORD *)(a1 + 76) = v7;
  v8 = sub_9836C(0x10u);
  sub_25695C((int)v8, *(FILE **)(a1 + 56));
  *(_DWORD *)(a1 + 80) = v8;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 84) = v8;
  sub_92080((_DWORD *)(a1 + 8));
  v9 = (_DWORD *)dword_48769C;
  if ( dword_48769C )
  {
    while ( *v9 )
      v9 = (_DWORD *)*v9;
    *v9 = a1;
  }
  else
  {
    dword_48769C = a1;
  }
  return a1;
}
