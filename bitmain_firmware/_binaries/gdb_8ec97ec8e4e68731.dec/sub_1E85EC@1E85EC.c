void __fastcall sub_1E85EC(int a1)
{
  const char *v1; // r8
  int v2; // r4
  int v3; // r7
  int v4; // r3
  size_t n; // r5
  const char *v6; // r9
  int v7; // r7
  void *v8; // r6
  int v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r11
  int v13; // r0
  int v14; // r0
  int v15; // r7
  int v16; // r0
  const char *v17; // r4
  int v18; // r0
  const char *v19; // r0
  int v20; // [sp+14h] [bp-18h]
  int v21; // [sp+1Ch] [bp-10h]

  if ( !*(_DWORD *)(dword_487D2C + 8) )
    sub_946E0("command cannot be used without an exec file");
  v1 = (const char *)a1;
  sub_1E831C(a1);
  if ( !v1 )
  {
    v20 = 0;
    goto LABEL_20;
  }
  if ( !strcmp(v1, "-r") )
  {
    v20 = 1;
LABEL_20:
    v2 = *(_DWORD *)(*(_DWORD *)(dword_487D2C + 8) + 100);
    if ( !v2 )
      return;
    v1 = 0;
    goto LABEL_6;
  }
  v2 = *(_DWORD *)(*(_DWORD *)(dword_487D2C + 8) + 100);
  if ( !v2 )
  {
LABEL_28:
    sub_259F10("No loaded section named '%s'.\n", v1);
    return;
  }
  v20 = 0;
LABEL_6:
  v3 = 0;
  v21 = 0;
  do
  {
    v4 = *(_DWORD *)(v2 + 20);
    if ( (v4 & 2) != 0 && (!v20 || (v4 & 8) != 0) )
    {
      n = *(_DWORD *)(v2 + 36);
      if ( n )
      {
        v6 = *(const char **)v2;
        if ( !v1 || !strcmp(v1, *(const char **)v2) )
        {
          v7 = *(_DWORD *)(v2 + 32);
          v8 = sub_9836C(n);
          sub_2ADEDC(*(_DWORD *)(dword_487D2C + 8), v2, v8, dword_487D2C, 0, 0, n);
          v9 = sub_2324B4(v8, v7, n, 0);
          v10 = v9;
          if ( v9 == -1 )
          {
            v16 = sub_16F654(-1);
            v17 = (const char *)sub_25AC8C(v16, v7);
            v18 = sub_16F654((int)v17);
            v19 = (const char *)sub_25AC8C(v18, n + v7);
            sub_946E0("target memory fault, section %s, range %s -- %s", v6, v17, v19);
          }
          v11 = sub_16F654(v9);
          v12 = sub_25AC8C(v11, v7);
          v13 = sub_16F654(v12);
          v14 = sub_25AC8C(v13, n + v7);
          sub_259F10("Section %s, range %s -- %s: ", v6, v12, v14);
          if ( v10 )
          {
            sub_259F10("matched.\n");
          }
          else
          {
            sub_259F10("MIS-MATCHED!\n");
            ++v21;
          }
          v3 = 1;
          sub_339E64(v8);
        }
      }
    }
    v2 = *(_DWORD *)(v2 + 12);
  }
  while ( v2 );
  v15 = v3 ^ 1;
  if ( v21 )
    sub_946B0("One or more sections of the target image does not match\nthe loaded file\n");
  if ( !v1 )
    v15 = 0;
  if ( v15 )
    goto LABEL_28;
}
