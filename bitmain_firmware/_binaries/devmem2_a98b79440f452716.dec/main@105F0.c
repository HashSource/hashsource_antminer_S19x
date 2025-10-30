int __fastcall main(int a1, char **a2, char **a3)
{
  unsigned int v5; // r8
  int v6; // r6
  _BYTE *v7; // r5
  int v8; // r10
  char *v9; // r2
  unsigned int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  FILE *v14; // r5
  int v15; // r4
  char *v16; // r0
  FILE *v17; // r5
  int v18; // r4
  char *v19; // r0
  FILE *v20; // r5
  int v21; // r4
  char *v22; // r0
  __int32_t v23; // [sp+14h] [bp-8h]

  if ( a1 <= 1 )
  {
    fprintf(
      (FILE *)stderr,
      "\n"
      "Usage:\t%s { address } [ type [ data ] ]\n"
      "\taddress : memory address to act upon\n"
      "\ttype    : access operation type : [b]yte, [h]alfword, [w]ord\n"
      "\tdata    : data to be written\n"
      "\n",
      *a2);
    exit(1);
  }
  v5 = strtoul(a2[1], 0, 0);
  if ( a1 == 2 )
    v23 = 119;
  else
    v23 = (*_ctype_tolower_loc())[(unsigned __int8)*a2[2]];
  v6 = open64("/dev/mem", 1052674);
  if ( v6 == -1 )
  {
    v20 = (FILE *)stderr;
    v21 = *_errno_location();
    v22 = strerror(v21);
    fprintf(v20, "Error at line %d, file %s (%d) [%s]\n", 78, "devmem2.c", v21, v22);
    exit(1);
  }
  puts("/dev/mem opened.");
  fflush((FILE *)stdout);
  v7 = (_BYTE *)((int (__fastcall *)(_DWORD, int, int, int, int))mmap64)(0, 4096, 3, 1, v6);
  if ( v7 == (_BYTE *)-1 )
  {
    v14 = (FILE *)stderr;
    v15 = *_errno_location();
    v16 = strerror(v15);
    fprintf(v14, "Error at line %d, file %s (%d) [%s]\n", 84, "devmem2.c", v15, v16);
    exit(1);
  }
  v8 = v5 & 0xFFF;
  printf("Memory mapped at address %p.\n", v7);
  fflush((FILE *)stdout);
  v9 = &v7[v8];
  if ( v23 == 104 )
  {
    printf("Value at address 0x%lX (%p): 0x%X\n", v5, v9, *(unsigned __int16 *)&v7[v8]);
    fflush((FILE *)stdout);
    if ( a1 <= 3 )
      goto LABEL_12;
    v13 = strtoul(a2[3], 0, 0);
    v12 = (unsigned __int16)v13;
    v11 = v13;
    *(_WORD *)&v7[v8] = v13;
    goto LABEL_18;
  }
  if ( v23 == 119 )
  {
    printf("Value at address 0x%lX (%p): 0x%X\n", v5, v9, *(_DWORD *)&v7[v8]);
    fflush((FILE *)stdout);
    if ( a1 <= 3 )
      goto LABEL_12;
    v12 = strtoul(a2[3], 0, 0);
    *(_DWORD *)&v7[v8] = v12;
    v11 = v12;
    goto LABEL_18;
  }
  if ( v23 != 98 )
  {
    fprintf((FILE *)stderr, "Illegal data type '%c'.\n", v23);
    exit(2);
  }
  printf("Value at address 0x%lX (%p): 0x%X\n", v5, v9, (unsigned __int8)v7[v8]);
  fflush((FILE *)stdout);
  if ( a1 > 3 )
  {
    v11 = strtoul(a2[3], 0, 0);
    v7[v8] = v11;
    v12 = (unsigned __int8)v11;
LABEL_18:
    printf("Written 0x%lX; readback 0x%X\n", v11, v12);
    fflush((FILE *)stdout);
  }
LABEL_12:
  if ( munmap(v7, 0x1000u) == -1 )
  {
    v17 = (FILE *)stderr;
    v18 = *_errno_location();
    v19 = strerror(v18);
    fprintf(v17, "Error at line %d, file %s (%d) [%s]\n", 126, "devmem2.c", v18, v19);
    exit(1);
  }
  close(v6);
  return 0;
}
