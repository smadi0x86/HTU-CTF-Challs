# Build phase
FROM rust:slim AS builder

WORKDIR /app
COPY ./chall .
RUN cargo build --release

# Final image
FROM debian:bookworm-slim

WORKDIR /app
COPY --from=builder /app/target/release/rustysmadi ./

# Create a non-root user
RUN useradd -ms /bin/bash user
USER user

# Set environment variables
ENV FLAG="HTUCTF{smAdI_1s_stArTing_t0_lEaRn_rUst_I_gUesS}"

# Run the application
CMD ["/app/rustysmadi"]