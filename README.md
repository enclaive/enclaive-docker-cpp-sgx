SGX c++ demonstration


## Building and Running

```sh
docker-compose up
```

## observe that cpp-nosgx has access to the host kernel, but within cpp-sgx it does not

```sh
cpp-nosgx    | going to look at your hosts kernel commandline:
cpp-nosgx    |
cpp-nosgx    | BOOT_IMAGE=/vmlinuz-5.15.0-46-generic root=/dev/mapper/ubuntu--vg-ubuntu--lv ro

cpp-sgx      | going to look at your hosts kernel commandline:
cpp-sgx      |
cpp-sgx exited with code 0

```
