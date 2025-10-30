unsigned int __fastcall sub_BAF60(unsigned int *a1, unsigned int a2)
{
  size_t v2; // r3
  unsigned int v5; // r0
  unsigned int v7; // r1
  unsigned int v8; // r0
  int v9; // r6
  void *v10; // r0
  const void *v11; // r1
  int v12; // r7
  size_t v13; // r2
  int v14; // r2

  v2 = *a1;
  if ( *a1 < a2 )
  {
    v7 = a1[2];
    if ( a2 <= v7 )
    {
      memset((void *)(a1[1] + v2), 0, a2 - v2);
      *a1 = a2;
      return a2;
    }
    if ( a2 > 0x5FFFFFFC )
    {
      v14 = 128;
LABEL_16:
      sub_D0048(7, 105, 65, "crypto/buffer/buffer.c", v14);
      return 0;
    }
    v8 = a1[3];
    v9 = 4 * ((a2 + 3) / 3);
    if ( (v8 & 1) != 0 )
    {
      v10 = (void *)sub_E12E4(v9, "crypto/buffer/buffer.c", 62, v8 << 31);
      v11 = (const void *)a1[1];
      v12 = (int)v10;
      if ( v11 )
      {
        if ( v10 )
        {
          memcpy(v10, v11, *a1);
          ((void (__fastcall *)(unsigned int, unsigned int, const char *, int))loc_E18E0)(
            a1[1],
            *a1,
            "crypto/buffer/buffer.c",
            66);
LABEL_13:
          v13 = *a1;
          a1[1] = v12;
          a1[2] = v9;
          memset((void *)(v12 + v13), 0, a2 - v13);
          *a1 = a2;
          return a2;
        }
        goto LABEL_17;
      }
    }
    else
    {
      v12 = sub_E0788(a1[1], v7, v9, (int)"crypto/buffer/buffer.c", 135);
    }
    if ( v12 )
      goto LABEL_13;
LABEL_17:
    v14 = 137;
    goto LABEL_16;
  }
  v5 = a1[1];
  if ( v5 )
    memset((void *)(v5 + a2), 0, v2 - a2);
  *a1 = a2;
  return a2;
}
