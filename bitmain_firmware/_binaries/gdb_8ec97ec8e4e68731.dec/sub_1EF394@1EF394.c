_DWORD *__fastcall sub_1EF394(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  int v6; // r0
  int v7; // r6
  char *v8; // r1
  int v9; // r1
  int v10; // r2
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD v14[3]; // [sp+Ch] [bp-1Ch] BYREF
  unsigned __int8 *v15; // [sp+18h] [bp-10h] BYREF
  _BYTE v16[12]; // [sp+1Ch] [bp-Ch] BYREF

  v4 = v14;
  v14[0] = a2;
  v14[1] = a3;
  v14[2] = a4;
  v6 = sub_16F654((int)a1);
  ((void (__fastcall *)(int))loc_1E2770)(v6);
  v7 = dword_488C94;
  sub_1E7DEC("qC");
  sub_1E4EB8((char **)v7, (size_t *)(v7 + 4), 0, 0, 0);
  v8 = *(char **)v7;
  if ( **(_BYTE **)v7 == 81 && v8[1] == 67 )
  {
    v4 = v16;
    v12 = sub_1E13D4((int)v16, (unsigned __int8 *)v8 + 2, &v15);
    if ( *v15 )
    {
      if ( dword_48A590 )
      {
        v13 = (_DWORD *)sub_242FC8(v12);
        sub_2594B0(*v13, "warning: garbage in qC reply\n");
      }
    }
  }
  v9 = v4[1];
  v10 = v4[2];
  *a1 = *v4;
  a1[1] = v9;
  a1[2] = v10;
  return a1;
}
