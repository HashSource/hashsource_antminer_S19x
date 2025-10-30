int __fastcall sub_2AE08C(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  int v9; // r8
  int v10; // r10
  int v11; // r0
  unsigned int v12; // r1
  void *v13; // r4
  unsigned int v14; // r0
  void *v15; // r5
  signed int v16; // r0
  void *v17; // r9
  int v18; // [sp+8h] [bp-E8h] BYREF
  int v19; // [sp+Ch] [bp-E4h] BYREF
  void *ptr; // [sp+10h] [bp-E0h]
  _DWORD v21[6]; // [sp+14h] [bp-DCh] BYREF
  char v22; // [sp+2Ch] [bp-C4h] BYREF
  void (*v23)(); // [sp+30h] [bp-C0h]
  void (*v24)(); // [sp+40h] [bp-B0h]
  void (*v25)(); // [sp+44h] [bp-ACh]
  void (*v26)(); // [sp+48h] [bp-A8h]
  int v27; // [sp+4Ch] [bp-A4h]
  void (*v28)(); // [sp+50h] [bp-A0h]
  int (__fastcall *v29)(int, int, int, int); // [sp+58h] [bp-98h]
  _DWORD s[34]; // [sp+68h] [bp-88h] BYREF

  if ( ((a1[10] >> 5) & 0x43) != 1 || (a2[5] & 4) == 0 )
  {
    v18 = a3;
    result = sub_2A9680((int)a1, (int)a2, &v18);
    if ( !result )
      return result;
    return v18;
  }
  v9 = 0;
  memset(s, 0, sizeof(s));
  v10 = a1[39];
  a1[39] = 0;
  s[15] = a1 + 39;
  s[12] = a1;
  s[14] = a1;
  v11 = sub_2FCD2C(a1);
  v24 = nullsub_100;
  v26 = nullsub_101;
  v12 = a2[9];
  v27 = 2809860;
  s[7] = v11;
  v28 = nullsub_102;
  v23 = nullsub_103;
  v21[0] = 0;
  v21[1] = 1;
  v21[4] = a2;
  v25 = nullsub_104;
  v29 = sub_2AE008;
  v21[2] = 0;
  v21[5] = 0;
  v21[3] = v12;
  s[6] = &v22;
  if ( !a3 )
  {
    v14 = a2[10];
    if ( v12 >= v14 )
      v14 = v12;
    v15 = sub_2AB368(v14);
    if ( v15 )
    {
      v19 = a1[27];
      ptr = malloc(8 * v19);
      if ( ptr )
      {
        v9 = 1;
        v13 = v15;
        goto LABEL_9;
      }
      free(v15);
    }
LABEL_22:
    sub_2FC4E4(a1);
    a1[39] = v10;
    return 0;
  }
  v19 = a1[27];
  ptr = malloc(8 * v19);
  if ( !ptr )
    goto LABEL_22;
  v13 = 0;
LABEL_9:
  sub_2ADCFC((int)a1, (int (__fastcall *)(int, int, int))sub_2AE014, (int)&v19);
  if ( !a4 )
  {
    sub_2FE080(a1, s);
    v16 = (*(int (__fastcall **)(_DWORD *))(a1[1] + 260))(a1);
    v17 = sub_2AB368(v16);
    (*(void (__fastcall **)(_DWORD *, void *))(a1[1] + 264))(a1, v17);
  }
  v18 = sub_2A7B54((int)a1, (int)s, (int)v21);
  if ( v18 )
    v9 = 0;
  if ( v9 )
    free(v13);
  sub_2ADCFC((int)a1, (int (__fastcall *)(int, int, int))sub_2AE058, (int)&v19);
  free(ptr);
  sub_2FC4E4(a1);
  a1[39] = v10;
  return v18;
}
