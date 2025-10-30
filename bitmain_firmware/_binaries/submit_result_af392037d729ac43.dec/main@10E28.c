int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  DIR *v3; // r0
  DIR *v4; // r4
  struct dirent *v5; // r0
  const char *d_name; // r5
  char *i; // r0
  int v8; // r7
  int v9; // r3
  char s[104]; // [sp+14h] [bp-68h] BYREF

  memset(s, 0, 0x64u);
  while ( 1 )
  {
    v3 = opendir("/mnt/card/Result/");
    if ( v3 )
      break;
    printf("\n\nsubmit_result: Open %s failed!\n", "/mnt/card/Result/");
    sleep(0x12Cu);
  }
  v4 = v3;
  printf("\n\nsubmit_result: Open %s success\n", "/mnt/card/Result/");
  while ( 1 )
  {
LABEL_5:
    v5 = readdir(v4);
    if ( !v5 )
      goto LABEL_20;
    do
    {
      if ( v5->d_name[0] == 46 && (!v5->d_name[1] || v5->d_name[1] == 46 && !v5->d_name[2]) )
        goto LABEL_5;
      d_name = v5->d_name;
      if ( !strcmp(v5->d_name, ".keep") )
        goto LABEL_5;
      puts("\n");
      printf("submit_result: file name: %s\n", d_name);
      memset(&s[18], 0, 0x52u);
      qmemcpy(s, "/mnt/card/Result/", 17);
      for ( i = strcpy(&s[17], d_name); !sub_114E0(i); i = (char *)sleep(0x1Eu) )
        ;
      if ( !sub_11254(s) )
      {
        sleep(0xAu);
        if ( !sub_11254(s) )
        {
          sleep(0xAu);
          if ( !sub_11254(s) )
          {
            if ( remove(s) )
              printf("rm %s fail\n\n", s);
            else
              printf("rm %s success\n\n", s);
          }
        }
        goto LABEL_19;
      }
      v8 = 5;
      while ( !sub_116F4(&unk_27120, dword_27D20) )
      {
        puts("some wrong with internet");
        sleep(2u);
LABEL_32:
        if ( !--v8 )
          goto LABEL_18;
      }
      memset(&unk_27D28, 0, 0xC8u);
      dword_27D24 = 0;
      v9 = sub_11770((int)&unk_27D28, 0xC8u);
      dword_27D24 = v9;
      if ( !v9 )
      {
        puts("submit_result: Receive MES system submit result responce fail");
        sleep(2u);
        goto LABEL_32;
      }
      if ( !sub_11154(&unk_27D28, v9) )
      {
        sleep(2u);
        goto LABEL_32;
      }
      if ( remove(s) )
        printf("submit_result: rm %s fail\n", s);
      else
        printf("submit_result: rm %s success\n", s);
LABEL_18:
      close(dword_270F4);
LABEL_19:
      sleep(1u);
      v5 = readdir(v4);
    }
    while ( v5 );
LABEL_20:
    closedir(v4);
    sleep(0x12Cu);
    v4 = opendir("/mnt/card/Result/");
    if ( v4 )
      printf("submit_result: Open %s success\n", "/mnt/card/Result/");
    else
      printf("submit_result: Open %s failed!\n", "/mnt/card/Result/");
  }
}
