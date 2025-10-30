const char *sub_5E568()
{
  const char *result; // r0
  int v1; // r3
  unsigned int v2; // r9
  int v3; // r10
  unsigned int v4; // r5
  unsigned int i; // r8
  _DWORD *v6; // r7
  _DWORD *v7; // r11
  int v8; // t1
  _DWORD *v9; // r5
  int v10; // t1
  int v11; // [sp+4h] [bp-50h]
  unsigned int v12; // [sp+18h] [bp-3Ch]
  int *v13; // [sp+1Ch] [bp-38h]
  char v14[52]; // [sp+20h] [bp-34h] BYREF

  sub_1E938(v14, 0x30u);
  printf("%s ", v14);
  printf("%s :  \n", "print_works");
  strcpy(&byte_64A638[256], " ");
  result = (const char *)sub_3CC5C((int)&byte_64A638[256], v14);
  v1 = dword_223680;
  if ( *(_BYTE *)(dword_223680 + 269) )
  {
    v12 = 1;
  }
  else
  {
    v12 = *(_DWORD *)(dword_223680 + 64);
    if ( !v12 )
      return result;
  }
  result = "\nmidstate=0x";
  v13 = &dword_7169AC;
  v11 = 0;
  while ( 1 )
  {
    v2 = 0;
    v3 = v13[1];
    ++v13;
    if ( *(_DWORD *)(v1 + 72) )
    {
      do
      {
        v4 = *(_DWORD *)(v1 + 312);
        for ( i = 0; v4 > i; v4 = *(_DWORD *)(dword_223680 + 312) )
        {
          v6 = (_DWORD *)(v3 + 60 * (i + v4 * v2));
          printf("\n[ASIC %03d][CORE %03d][PATTERN %d]:\n", v11, v2, i);
          v7 = (_DWORD *)((char *)v6 + 27);
          printf("work id : %d, is_nonce_return_back = %d", *v6, v6[1]);
          printf("\nmidstate=0x");
          do
          {
            v8 = *((unsigned __int8 *)v7 + 1);
            v7 = (_DWORD *)((char *)v7 + 1);
            printf("%02x", v8);
          }
          while ( (_DWORD *)((char *)v6 + 59) != v7 );
          v9 = (_DWORD *)((char *)v6 + 15);
          printf("\ndata2=");
          do
          {
            v10 = *((unsigned __int8 *)v9 + 1);
            v9 = (_DWORD *)((char *)v9 + 1);
            printf("%02x", v10);
          }
          while ( v9 != (_DWORD *)((char *)v6 + 27) );
          ++i;
          printf("\nnonce=0x%08x", v6[3]);
          result = (const char *)putchar(10);
          v1 = dword_223680;
        }
        ++v2;
      }
      while ( *(_DWORD *)(v1 + 72) > v2 );
    }
    if ( ++v11 >= v12 )
      break;
    v1 = dword_223680;
  }
  return result;
}
