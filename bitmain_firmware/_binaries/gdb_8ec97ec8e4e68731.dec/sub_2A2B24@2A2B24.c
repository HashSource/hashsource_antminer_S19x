int sub_2A2B24()
{
  int v1; // r5
  void *v2; // r0
  int *v3; // r12
  const char *v4; // r2
  const char *v5; // lr
  char **v6; // r3
  int v7; // r5
  const char **v8; // r6
  int v9; // r1
  int v10; // r4
  const char **v11; // r0

  if ( dword_48BB98 )
    return dword_48BB98;
  dword_48BB98 = (int)sub_93028(8u);
  *(_DWORD *)dword_48BB98 = sub_93028(0x24u);
  v1 = dword_48BB98;
  v2 = sub_93028(0x24u);
  v3 = (int *)dword_48BB98;
  v4 = "Select raw register names";
  *(_DWORD *)(v1 + 4) = v2;
  v5 = "reg-names-raw";
  v6 = off_3FDE84;
  v7 = *v3;
  v8 = (const char **)v3[1];
  v9 = *v3 - 4;
  v10 = *v3 + 28;
  v11 = v8;
  while ( 1 )
  {
    *(_DWORD *)(v9 + 4) = v5;
    v9 += 4;
    *v11 = v4;
    v6 += 18;
    ++v11;
    if ( v9 == v10 )
      break;
    v5 = *(v6 - 18);
    v4 = *(v6 - 17);
  }
  *(_DWORD *)(v7 + 32) = 0;
  v8[8] = 0;
  return (int)v3;
}
