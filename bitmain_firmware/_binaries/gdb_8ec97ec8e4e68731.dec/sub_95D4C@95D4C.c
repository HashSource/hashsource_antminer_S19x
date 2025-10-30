int __fastcall sub_95D4C(void *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v5; // r5
  unsigned int **v6; // r0
  unsigned int *v7; // r4
  unsigned int v8; // r11
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int *v11; // r1
  unsigned int *v12; // r4
  unsigned int *v13; // r8
  unsigned int v14; // r3
  unsigned __int64 v15; // r0
  unsigned int v16; // r4
  int v17; // r4
  bool v19; // cf
  int v20; // r2
  void *v21; // r0
  unsigned int v22; // [sp+10h] [bp-34h]
  unsigned int v25; // [sp+2Ch] [bp-18h] BYREF
  unsigned int v26; // [sp+30h] [bp-14h] BYREF
  void *ptr; // [sp+34h] [bp-10h] BYREF
  unsigned int *v28; // [sp+38h] [bp-Ch]
  unsigned int *i; // [sp+3Ch] [bp-8h]

  v5 = a2;
  v6 = (unsigned int **)sub_22F480(&dword_475224);
  v7 = *v6;
  v8 = (unsigned int)v6[1];
  ptr = 0;
  v28 = 0;
  for ( i = 0; v8 > (unsigned int)v7; v7 += 4 )
  {
    if ( (*(_DWORD *)(v7[2] + 20) & 8) != 0 && sub_1B05A0(*v7, v7[1] - *v7, v5, a3) )
    {
      v9 = *v7;
      v10 = v7[1];
      if ( *v7 < (unsigned int)a2 )
        v9 = a2;
      v22 = a3 + a2;
      v25 = v9;
      if ( a3 + (unsigned int)a2 > v10 )
        v22 = v10;
      v26 = v22 - v9;
      if ( v28 == i )
      {
        sub_95F98(&ptr, v28, &v25, &v26);
      }
      else
      {
        v11 = v28 + 2;
        if ( v28 )
        {
          *v28 = v9;
          *(v11 - 1) = v22 - v9;
        }
        v28 = v11;
      }
    }
  }
  sub_1B07F4(&ptr);
  v12 = (unsigned int *)ptr;
  v13 = v28;
  if ( ptr == v28 )
  {
LABEL_23:
    v17 = 2;
    *(_QWORD *)a4 = a3;
  }
  else
  {
    while ( !sub_1B05A0(*v12, v12[1], v5, a3) )
    {
      v12 += 2;
      if ( v13 == v12 )
      {
        v13 = (unsigned int *)ptr;
        goto LABEL_23;
      }
    }
    v14 = *v12 + v12[1];
    if ( v14 >= (int)a2 + (int)a3 )
      v14 = a2 + a3;
    v15 = v14 - a2;
    if ( v15 > a3 )
    {
      sub_94700(
        (int)"exec.c",
        757,
        "%s: Assertion `%s' failed.",
        "target_xfer_status section_table_read_available_memory(gdb_byte*, ULONGEST, ULONGEST, ULONGEST*)",
        "end - offset <= len");
      v21 = ptr;
      if ( ptr )
        sub_339E64(ptr);
      sub_338FFC(v21);
    }
    v16 = *v12;
    if ( v16 > a2 )
    {
      v13 = (unsigned int *)ptr;
      v19 = v16 >= (unsigned int)a2;
      v20 = v16 - a2;
      v17 = 2;
      *(_DWORD *)a4 = v20;
      *(_DWORD *)(a4 + 4) = -(HIDWORD(a2) + !v19);
    }
    else
    {
      v17 = sub_95464(a1, a2, v15, (_QWORD *)a4);
      v13 = (unsigned int *)ptr;
    }
  }
  if ( v13 )
    sub_339E64(v13);
  return v17;
}
